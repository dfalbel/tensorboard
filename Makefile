proto:
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/event.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/summary.proto"
	cd inst && protoc -I "proto" --cpp_out="../src/" "proto/plugins/scalar/plugin_data.proto"
