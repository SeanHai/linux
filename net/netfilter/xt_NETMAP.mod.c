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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaacfe72f, "nf_nat_setup_info" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "99D4C0AE3E26FEACD70BBB1");
MODULE_INFO(rhelversion, "8.0");
