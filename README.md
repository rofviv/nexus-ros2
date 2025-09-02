
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




## FASE 2 - MANUAL 

```bash
colcon build
source install/setup.bash
ros2 launch manual manual.launch.py

```

```bash
source install/setup.bash
ros2 launch manual manual.launch.py
ros2 launch robot_description view_robot.py
```

##  Notas

- Se debe cerrar la ventana que permite manipular el JPAC2 manualmente, para que los topicos publicados de JOISTICK FISICO haga que las ruedas se muevan hacia adelante o atras en RVIZ

- Se debe modificar el archivo estado.txt para puerta, reversa, freno y presionar CTRL+S para guardar los cambios y este se visualize en consola o escuchando el topico actuador_manual (ros2 topic echo /actuador_manual)
---




##  Navegation

## Terminal 1 – jpac2_ws

```bash
colcon build --packages-select robot_description --allow-overriding robot_description
source install/setup.bash
ros2 launch robot_description view_robot.py
```
## Terminal 2 – jpac2_ws
```bash
colcon build --packages-select turtlebot3_navigation2 --allow-overriding turtlebot3_navigation2
source install/setup.bash
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True 
```



