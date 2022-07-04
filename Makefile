proto:
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/event.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/summary.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/tensor.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/resource_handle.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/tensor_shape.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/types.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/plugins/scalar/plugin_data.proto"
