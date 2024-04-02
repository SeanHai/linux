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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0x9c790386, "watchdog_init_timeout" },
	{ 0x27e1a049, "printk" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4B6865A51D0BBE2D8088953");
MODULE_INFO(rhelversion, "8.0");
