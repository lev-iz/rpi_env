# Buildroot RPI4 external tree

This repository contains extternal buildroot config for RaspberryPi4 board.

Start building:

   ```bash
   source br_external_rpi/env_setup.sh
   set_target rpi_4
   m all
   ```

Editing the project: `m menuconfig`

   After editing, the configuration will be saved in the file: ./br_external/output/rpi4/.config
   To save changes, call: m savedefconfig