#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x13ee26b4, "vmbus_hvsock_device_unregister" },
	{ 0x7f5d9eb7, "__hv_pkt_iter_next" },
	{ 0x17bcfed7, "__vsock_create" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x9caf7bbf, "vmbus_set_chn_rescind_callback" },
	{ 0x85f15121, "__vsock_core_init" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf8bc917f, "hv_pkt_iter_close" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x858ce318, "vsock_find_connected_socket" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xa592a1a, "sk_free" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xea01893d, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x2144ff05, "hv_pkt_iter_first" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x32fb2404, "vsock_remove_sock" },
	{ 0x74b72f93, "vmbus_send_tl_connect_request" },
	{ 0x100155fe, "vsock_insert_connected" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf47fbc30, "vsock_enqueue_accept" },
	{ 0x7da4a994, "vmbus_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,vsock";


MODULE_INFO(srcversion, "4EC78A1B60598CC0FEB9FC2");
MODULE_INFO(rhelversion, "8.0");
