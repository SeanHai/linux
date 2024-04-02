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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x5dbcdb3, "ip6_tnl_change_mtu" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0xba41a8bd, "inet6_add_protocol" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x110d0ea6, "ip6_tnl_get_link_net" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xaa513ce5, "ip6_tnl_encap_setup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x602e9b5b, "ip6_redirect" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xf7bdb4, "ip6_tnl_rcv" },
	{ 0x27e1a049, "printk" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xe5ebb781, "ip6_tnl_get_iflink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0xed946a48, "init_net" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x1bdd16bf, "ip6_tnl_xmit_ctl" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x7198250a, "__get_hash_from_flowi6" },
	{ 0xce4ad748, "inet6_del_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ddf1b54, "ip6_update_pmtu" },
	{ 0x6300ef39, "ip6_tnl_xmit" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x509d1287, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcae5ca5, "gro_cells_init" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xbbd73810, "rt6_lookup" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xf298d8c, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x3489e8a6, "ip6_tnl_get_cap" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd06027a3, "gre_parse_header" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel,gre";


MODULE_INFO(srcversion, "A143787EE399649AEBC267A");
MODULE_INFO(rhelversion, "8.0");
