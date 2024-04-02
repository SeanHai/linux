#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x9d3fe5e3, "nft_chain_validate_dependency" },
	{ 0x67394d1a, "nft_chain_validate_hooks" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xa7b268e4, "nft_dump_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_conntrack";


MODULE_INFO(srcversion, "E9297A6EB4C773AFB37F37A");
MODULE_INFO(rhelversion, "8.0");
