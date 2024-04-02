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
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb7bf278a, "security_skb_classify_flow" },
	{ 0x422d0a87, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x897e956d, "ip6_local_out" },
	{ 0x6fcde61c, "ip6_dst_hoplimit" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x5c114647, "xfrm_lookup" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x1c1ac87c, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B77478A5AFAC08AA8480625");
MODULE_INFO(rhelversion, "8.0");
