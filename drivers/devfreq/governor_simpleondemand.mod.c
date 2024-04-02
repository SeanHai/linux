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
	{ 0x27e1a049, "printk" },
	{ 0x253c52c6, "devfreq_remove_governor" },
	{ 0x99129f44, "devfreq_add_governor" },
	{ 0x77d30a24, "devfreq_monitor_start" },
	{ 0x3584b826, "devfreq_monitor_suspend" },
	{ 0xaf0f46af, "devfreq_interval_update" },
	{ 0x5bcbda63, "devfreq_monitor_stop" },
	{ 0x319ae461, "devfreq_monitor_resume" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B19A3C5C99D4780B2509DCE");
MODULE_INFO(rhelversion, "8.0");
