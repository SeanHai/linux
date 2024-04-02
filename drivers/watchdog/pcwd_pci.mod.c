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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x91715312, "sprintf" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x27e1a049, "printk" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7c1372e8, "panic" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011E3d00005030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1842A6F3158619D70E3E153");
MODULE_INFO(rhelversion, "8.0");
