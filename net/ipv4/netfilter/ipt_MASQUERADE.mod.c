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
	{ 0x3f5c468e, "nf_nat_masquerade_ipv4_unregister_notifier" },
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0xa1be6f21, "nf_nat_masquerade_ipv4_register_notifier" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x36fd30ce, "nf_nat_masquerade_ipv4" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv4,nf_conntrack";


MODULE_INFO(srcversion, "B97D40476A64149344DEFD1");
MODULE_INFO(rhelversion, "8.0");
