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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeb270ce1, "gro_find_receive_by_type" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x839ff0b4, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1f218ce9, "ip_tunnel_metadata_cnt" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xea460797, "udp_tunnel_xmit_skb" },
	{ 0x74d62144, "dst_cache_set_ip6" },
	{ 0xa68e4ccc, "udp_tun_rx_dst" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1281fc85, "dst_cache_get_ip4" },
	{ 0x29d50711, "dst_cache_get_ip6" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x5eaeb6b2, "udp_sock_create6" },
	{ 0x6fb8ef20, "setup_udp_tunnel_sock" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4cc2d7d0, "udp_tunnel_sock_release" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x35a9258e, "udp_tunnel_push_rx_port" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xea0d8067, "gro_cells_receive" },
	{ 0x85a7dbc4, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xc26ae7ad, "ipv6_stub" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x8ed052a4, "rtnl_configure_link" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x471a7aeb, "udp_tunnel_notify_add_rx_port" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x6ddaedec, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x14c090e5, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcae5ca5, "gro_cells_init" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xbbd73810, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x4f5e4f4b, "udp_tunnel6_xmit_skb" },
	{ 0xd7ed619d, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcc616694, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6fcde61c, "ip6_dst_hoplimit" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "DE38BF77CB1D8EC0A8728C9");
MODULE_INFO(rhelversion, "8.0");
