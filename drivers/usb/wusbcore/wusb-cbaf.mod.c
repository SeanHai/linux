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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe0024da3, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc03ip01in*");

MODULE_INFO(srcversion, "5BC07DEBAFC29C60E766635");
MODULE_INFO(rhelversion, "8.0");
