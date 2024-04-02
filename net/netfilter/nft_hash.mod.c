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
	{ 0xca1da9fc, "nft_unregister_expr" },
	{ 0x5974243c, "nft_register_expr" },
	{ 0x754d539c, "strlen" },
	{ 0x6a40ca0, "__skb_get_hash_symmetric" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3b3382a0, "nft_set_lookup_global" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaacaeda8, "nft_validate_register_store" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xde57b5f5, "nft_parse_u32_check" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa7b268e4, "nft_dump_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "65300D573EF88E834A704D3");
MODULE_INFO(rhelversion, "8.0");
