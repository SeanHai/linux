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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "109757A208CA6E70A588DC9");
MODULE_INFO(rhelversion, "8.0");
