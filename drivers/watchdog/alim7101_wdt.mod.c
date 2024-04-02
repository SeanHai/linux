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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x28cde093, "no_llseek" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x6bddef80, "misc_register" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x27e1a049, "printk" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B9d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00007101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "444A71A3F7EF6A2669B0D00");
MODULE_INFO(rhelversion, "8.0");
