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
	{ 0xeb37101c, "audit_log_end" },
	{ 0x2f51efd4, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x7bfde23d, "nf_log_packet" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd0f36f0d, "audit_log_format" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "084730E6BB09F5083E20803");
MODULE_INFO(rhelversion, "8.0");
