import os
import tensorflow as tf
import keras
from Common.tflite2cc import convert_tflite2cc
from Models.paths import TFLITE_MODEL_DIR, TFLITE_EXPORT_DIR, KERAS_MODEL_DIR

model_path = os.path.join(KERAS_MODEL_DIR, "kws_rnn.h5")
tflite_model_path = os.path.join(TFLITE_MODEL_DIR, "kws_rnn.tflite")
tflite_export_path = os.path.join(TFLITE_EXPORT_DIR, "kws_rnn")

mnist_rnn_model = keras.models.load_model(model_path)
converter = tf.lite.TFLiteConverter.from_keras_model(mnist_rnn_model)
converter.optimizations = [tf.lite.Optimize.DEFAULT]
converter.target_spec.supported_ops = [tf.lite.OpsSet.TFLITE_BUILTINS]
kws_rnn_lite = converter.convert()

with open(tflite_model_path, "wb") as tflite_file:
    tflite_file.write(kws_rnn_lite)

convert_tflite2cc(kws_rnn_lite, tflite_export_path)
