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
	{ 0x7da4a994, "vmbus_driver_unregister" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x66dea867, "__uio_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x7e46d0f5, "vmbus_establish_gpadl" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2fa8852b, "vmbus_connection" },
	{ 0x89a25aa, "vmbus_alloc_ring" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x501393b8, "vmbus_free_ring" },
	{ 0xc4d1388a, "uio_unregister_device" },
	{ 0x999e8297, "vfree" },
	{ 0x228fbd91, "vmbus_teardown_gpadl" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x7e3c4df3, "uio_event_notify" },
	{ 0xea3dceb5, "vmbus_connect_ring" },
	{ 0x25899035, "vmbus_set_sc_create_callback" },
	{ 0x9caf7bbf, "vmbus_set_chn_rescind_callback" },
	{ 0xb8133c35, "vmbus_disconnect_ring" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbce8e315, "vm_iomap_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,uio";


MODULE_INFO(srcversion, "B88C8EF774E7E60BA53E816");
MODULE_INFO(rhelversion, "8.0");
