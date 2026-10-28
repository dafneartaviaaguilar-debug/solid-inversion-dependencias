# Principio de Inversión de Dependencias (DIP)

Proyecto en **C++** que demuestra el quinto principio SOLID: **Dependency Inversion Principle**.

## ¿Qué dice el principio?

> Las clases de alto nivel no deben depender de clases concretas de bajo nivel. Ambas deben depender de **abstracciones**.

## ¿Cómo se implementa en este proyecto?

La clase `AdmProducto` (alto nivel) necesita enviar un recibo cuando se hace una compra. En vez de depender de una forma concreta de enviarlo, depende de la **abstracción** `EnvioRecibo`:

| Clase | Rol |
|-------|-----|
| `EnvioRecibo` | **Abstracción**: clase abstracta con `EnviarRecibo()` virtual puro. |
| `EnviarEmail` | Implementación concreta: envía el recibo por correo. |
| `EnviarApp` | Implementación concreta: imprime el recibo en la app. |
| `AdmProducto` | Clase de alto nivel: usa cualquier `EnvioRecibo`. |

### Código clave

```cpp
// EnvioRecibo.h -> la abstracción
class EnvioRecibo {
public:
    virtual void EnviarRecibo(string NombreProducto) const = 0;
};

// EnviarEmail y EnviarApp implementan la abstracción
class EnviarEmail : public EnvioRecibo { ... };
class EnviarApp   : public EnvioRecibo { ... };

// AdmProducto.cpp -> depende de la abstracción, NO de EnviarEmail ni EnviarApp
void AdmProducto::Compra(EnvioRecibo *enviorecibo) {
    enviorecibo->EnviarRecibo(producto.getNombre());
}
```

```cpp
// main.cpp -> aquí se decide qué implementación usar
EnvioRecibo* enviaremail = new EnviarEmail();
EnvioRecibo* enviarapp   = new EnviarApp();

admproducto.Compra(enviaremail);
admproducto.Compra(enviarapp);
```

### ¿Por qué cumple el principio?

- `AdmProducto` no conoce a `EnviarEmail` ni a `EnviarApp`; solo conoce `EnvioRecibo`.
- Se puede agregar otra forma de enviar recibos (por ejemplo SMS) creando una nueva clase que herede de `EnvioRecibo`, **sin modificar** `AdmProducto`.
- La dependencia se recibe desde afuera (como parámetro de `Compra`), no se crea dentro de la clase.

## Estructura del proyecto

```
EnvioRecibo.h  / EnvioRecibo.cpp   -> abstracción
EnviarEmail.h  / EnviarEmail.cpp   -> implementación por correo
EnviarApp.h    / EnviarApp.cpp     -> implementación por app
AdmProducto.h  / AdmProducto.cpp   -> clase de alto nivel
Producto.h     / Producto.cpp      -> datos del producto
main.cpp                           -> programa de ejemplo
```

## Salida del programa

```
Inversion de Dependencia

Producto: Producto 1, Enviando por correo el recibo...
Producto: Producto 1, Imprimiendo el recibo del APP...
```

## Cómo ejecutarlo

```bash
g++ *.cpp -o programa
./programa        # en Windows: programa.exe
```
