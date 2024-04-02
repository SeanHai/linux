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
	{ 0x110d0ea6, "ip6_tnl_get_link_net" },
	{ 0xe5ebb781, "ip6_tnl_get_iflink" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x9dabce8b, "xfrm6_protocol_deregister" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xef18f7e, "xfrm6_protocol_register" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x9f747f0b, "xfrm6_rcv_tnl" },
	{ 0x6e2cebec, "ip6_tnl_rcv_ctl" },
	{ 0x602e9b5b, "ip6_redirect" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x1ddf1b54, "ip6_update_pmtu" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xe5dad3af, "xfrm_state_lookup" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1bdd16bf, "ip6_tnl_xmit_ctl" },
	{ 0x5c114647, "xfrm_lookup" },
	{ 0x425e2f2c, "__xfrm_decode_session" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x91715312, "sprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xed946a48, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x509d1287, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xbbd73810, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0x3489e8a6, "ip6_tnl_get_cap" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel";


MODULE_INFO(srcversion, "75FDEB6F2B19745A41F0DFA");
MODULE_INFO(rhelversion, "8.0");
