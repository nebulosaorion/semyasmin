Pacote ROS 2 para exibição de conteúdos multimídia (texto, imagens, vídeos ou tópicos de imagem) via RViz ou Foxglove Studio, através do tópico `/ui_display`.

Comandos de exemplo

Exibir frase:

    ros2 topic pub /display_command std_msgs/String "data: 'sentence:Ola mundo\n Teste 1'"

Exibir imagem:

    ros2 topic pub /display_command std_msgs/String "data: 'image:/caminho/para/imagem.jpg'"

Exibir vídeo:

    ros2 topic pub /display_command std_msgs/String "data: 'video:/caminho/para/video.mp4'"

Espelhar outro tópico de imagem:

    ros2 topic pub /display_command std_msgs/String "data: 'topic:/camera/image_raw'"

