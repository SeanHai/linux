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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x28318305, "snprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0xe6478472, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "51584C4E343A63F6099D58F");
MODULE_INFO(rhelversion, "8.0");
