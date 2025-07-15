
##  1. Ir al workspace

```bash
cd nexus_ws
```

---

## Terminal 1 – Servidor rosbridge
```bash
colcon build
source install/setup.bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
```

## Terminal 2 – Interfaz Web + Nodos ROS 2

```bash
colcon build
source install/setup.bash

ros2 launch code_py ejecutar.launch.py
```

##  Abrir la interfaz web
👉 [http://127.0.0.1:5000](http://127.0.0.1:5000)
---

## Terminal 3 – Abrir RVIZ - Jpack2

```bash
colcon build
source install/setup.bash
ros2 launch robot_description view_robot.py
```

##  Notas

- Se debe cerrar la ventana que permite manipular el JPAC2 manualmente, para que los topicos publicados muevan las ruedas izquierda y derecha
---

