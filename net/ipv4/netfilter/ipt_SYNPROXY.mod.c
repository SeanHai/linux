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
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0xd4ddb5e3, "nf_ct_seqadj_init" },
	{ 0xdce1f40a, "synproxy_tstamp_adjust" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x222f8b67, "synproxy_init_timestamp_cookie" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0x82b6200b, "synproxy_parse_options" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xf39ea28e, "nf_ip_checksum" },
	{ 0xf4140f38, "synproxy_check_timestamp_cookie" },
	{ 0xda904568, "synproxy_build_options" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x2deed321, "synproxy_options_size" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x37faa150, "ip_local_out" },
	{ 0xe900269f, "ip_route_me_harder" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_synproxy_core";


MODULE_INFO(srcversion, "F56E41638E8FB332E3E20B6");
MODULE_INFO(rhelversion, "8.0");
