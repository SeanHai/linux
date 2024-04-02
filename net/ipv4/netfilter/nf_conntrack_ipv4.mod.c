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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x373ba864, "release_sock" },
	{ 0xb1df282c, "nf_conntrack_in" },
	{ 0x9b391fee, "__nf_ct_refresh_acct" },
	{ 0x4515396e, "nf_ct_l4proto_pernet_register" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xa651755c, "nf_conntrack_l4proto_sctp4" },
	{ 0x4d2e7ca6, "nf_ct_get_tuplepr" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xed1ee48c, "nf_conntrack_set_hashsize" },
	{ 0x43b8cdce, "nf_ct_deliver_cached_events" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0x74001c4c, "nf_conntrack_l4proto_tcp4" },
	{ 0xf39ea28e, "nf_ip_checksum" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xd1081f7c, "nf_ct_l4proto_unregister" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x6f0302cd, "nf_ct_invert_tuple" },
	{ 0xb432a475, "__nf_conntrack_confirm" },
	{ 0x27e1a049, "printk" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xfbee96b9, "nf_ct_l4proto_pernet_unregister" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x9f82e8d7, "nf_l4proto_log_invalid" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x31e35911, "nf_ct_l4proto_register" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xc43b19db, "nf_ct_l3proto_unregister" },
	{ 0x1d91a16e, "nf_conntrack_l4proto_dccp4" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0x3df9b3db, "nf_conntrack_l4proto_udplite4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6e224a7a, "need_conntrack" },
	{ 0x123130e4, "param_get_uint" },
	{ 0x6eab255b, "nf_ct_iterate_cleanup_net" },
	{ 0xa9d22b83, "nf_unregister_sockopt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2720d900, "nf_ct_seq_adjust" },
	{ 0x18585322, "nf_defrag_ipv4_enable" },
	{ 0x10b197a, "nf_conntrack_l4proto_udp4" },
	{ 0xa53d8849, "nf_register_sockopt" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x400f1e48, "nf_ct_l3proto_register" },
	{ 0x5d71f8dd, "nf_conntrack_find_get" },
	{ 0xa8cfc05a, "__nf_ct_l4proto_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "5D672DBAF45DBE01840F8AD");
MODULE_INFO(rhelversion, "8.0");
