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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x28cde093, "no_llseek" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6bddef80, "misc_register" },
	{ 0x5eba9410, "__request_region" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x27e1a049, "printk" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0139893251BB281941BD1A3");
MODULE_INFO(rhelversion, "8.0");
