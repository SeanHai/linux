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
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0x4062d575, "xfrm6_tunnel_deregister" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x74d62144, "dst_cache_set_ip6" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa210c10b, "skb_set_owner_w" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x602e9b5b, "ip6_redirect" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x27e1a049, "printk" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x22a9ce5a, "dst_cache_get" },
	{ 0x5def83f9, "skb_push" },
	{ 0xea0d8067, "gro_cells_receive" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xd8197cd5, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x85a41106, "ip_route_input_noref" },
	{ 0x12faa24b, "ipv6_chk_addr_and_flags" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x7198250a, "__get_hash_from_flowi6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x1ddf1b54, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x509d1287, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcae5ca5, "gro_cells_init" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xbbd73810, "rt6_lookup" },
	{ 0xa05e5057, "ip6tun_encaps" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x897e956d, "ip6_local_out" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6fcde61c, "ip6_dst_hoplimit" },
	{ 0xf12a5455, "xfrm6_tunnel_register" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x5c114647, "xfrm_lookup" },
	{ 0x1756bef8, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6";


MODULE_INFO(srcversion, "CFE0803DD6A3A7C6BEE9D82");
MODULE_INFO(rhelversion, "8.0");
