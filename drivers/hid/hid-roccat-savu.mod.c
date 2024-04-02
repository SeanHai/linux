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
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0xa047947, "class_destroy" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x1b73fbf8, "roccat_connect" },
	{ 0xf04223a1, "roccat_common2_device_init_struct" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xa3ff210a, "roccat_common2_sysfs_read" },
	{ 0x8ac6a683, "roccat_common2_sysfs_write" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat,hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002D5A");

MODULE_INFO(srcversion, "4AD81479F8BA8C3915B9FA9");
MODULE_INFO(rhelversion, "8.0");
