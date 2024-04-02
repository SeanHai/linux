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
	{ 0x28cde093, "no_llseek" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x27e1a049, "printk" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9753AB0D2DE638045DCB979");
MODULE_INFO(rhelversion, "8.0");
