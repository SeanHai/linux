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
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x85430a76, "nft_validate_register_load" },
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


MODULE_INFO(srcversion, "499A1A557EE37DCD9678769");
MODULE_INFO(rhelversion, "8.0");
