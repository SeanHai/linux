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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x27e1a049, "printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000494Fd000022C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "49BB853A01561675CE5C0D1");
MODULE_INFO(rhelversion, "8.0");
