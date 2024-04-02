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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x9c790386, "watchdog_init_timeout" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x7c1372e8, "panic" },
	{ 0x27e1a049, "printk" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x563e4e5e, "hrtimer_active" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9F2BF0E67153FB9DF36AD68");
MODULE_INFO(rhelversion, "8.0");
