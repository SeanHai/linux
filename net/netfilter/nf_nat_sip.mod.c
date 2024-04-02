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
	{ 0xd7de3f4f, "nf_ct_helper_expectfn_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe1bf420f, "nf_ct_helper_expectfn_unregister" },
	{ 0x547ecde0, "nf_nat_sip_hooks" },
	{ 0x3e166745, "ct_sip_parse_numerical_param" },
	{ 0xcf8840be, "ct_sip_parse_address_param" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0x5d75c70e, "ct_sip_parse_request" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xeb70d796, "ct_sip_parse_header_uri" },
	{ 0x8975e70a, "nf_ct_seqadj_set" },
	{ 0x1836c51b, "nf_ct_helper_log" },
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0x91715312, "sprintf" },
	{ 0x5ca00193, "ct_sip_get_header" },
	{ 0xd453e539, "ct_sip_get_sdp_header" },
	{ 0x5e8c1fe2, "__nf_nat_mangle_tcp_packet" },
	{ 0xf770c695, "nf_nat_mangle_udp_packet" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaacfe72f, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "CD51FC274C91D6759AE7122");
MODULE_INFO(rhelversion, "8.0");
