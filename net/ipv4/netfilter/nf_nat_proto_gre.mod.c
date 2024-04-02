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
	{ 0xce04ef8f, "nf_nat_used_tuple" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbc50d97c, "nf_nat_l4proto_register" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x9f23eb2e, "nf_nat_l4proto_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0x1a1c4632, "nf_nat_l4proto_in_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat";


MODULE_INFO(srcversion, "5CBB72D08C6E5DCA061E981");
MODULE_INFO(rhelversion, "8.0");
