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
	{ 0x9b391fee, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6dedf842, "nf_ct_expect_init" },
	{ 0xfe67ace3, "textsearch_prepare" },
	{ 0x77f7424b, "nf_conntrack_helpers_register" },
	{ 0x124f0552, "skb_find_text" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x27e1a049, "printk" },
	{ 0x9c11cbd0, "nf_ct_expect_put" },
	{ 0x146ea688, "nf_ct_expect_alloc" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0xe84155f1, "nf_conntrack_helpers_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1836c51b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8dc45081, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x317cc4af, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "1477B4DF92A03947E4E6E64");
MODULE_INFO(rhelversion, "8.0");
