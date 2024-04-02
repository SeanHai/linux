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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe1bf420f, "nf_ct_helper_expectfn_unregister" },
	{ 0xd7de3f4f, "nf_ct_helper_expectfn_register" },
	{ 0x3b8fff26, "nat_q931_hook" },
	{ 0xb5fb4f19, "nat_callforwarding_hook" },
	{ 0x98a3e485, "nat_h245_hook" },
	{ 0xe21f27ca, "nat_t120_hook" },
	{ 0xebc93708, "nat_rtp_rtcp_hook" },
	{ 0xcfbaf9f6, "set_ras_addr_hook" },
	{ 0xdfd8fd99, "set_sig_addr_hook" },
	{ 0x631b304b, "set_h225_addr_hook" },
	{ 0xc2caada3, "set_h245_addr_hook" },
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0xbd80eba1, "get_h225_addr" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x5e8c1fe2, "__nf_nat_mangle_tcp_packet" },
	{ 0xf770c695, "nf_nat_mangle_udp_packet" },
	{ 0xd89ff2b1, "nf_nat_follow_master" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaacfe72f, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "0BB3919E42B7A81C30B5040");
MODULE_INFO(rhelversion, "8.0");
