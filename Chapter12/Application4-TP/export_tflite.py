import tensorflow as tf
from keras.models import load_model
from tflite2cc import convert_tflite2cc

model = load_model("mlp_temperature_prediction.h5")
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()
convert_tflite2cc(tflite_model, "mlp_temperature_prediction")