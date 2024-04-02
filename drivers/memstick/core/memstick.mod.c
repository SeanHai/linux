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
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x91018733, "device_del" },
	{ 0xd257960c, "device_register" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x787b953, "idr_alloc" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x85ffabba, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "008E8B0439F32D629B644F9");
MODULE_INFO(rhelversion, "8.0");
