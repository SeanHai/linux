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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0x7a129f94, "ip_tunnel_get_iflink" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0x87cf308b, "ipv4_update_pmtu" },
	{ 0x4c3d62cd, "ip_tunnel_lookup" },
	{ 0xc0719627, "__ip_tunnel_change_mtu" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1281fc85, "dst_cache_get_ip4" },
	{ 0x14c02506, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34aae91e, "inetdev_by_index" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0x92789153, "ip_tunnel_setup" },
	{ 0xb412aa2a, "ip_tunnel_dellink" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa433bec8, "ip_tunnel_delete_nets" },
	{ 0x8e8f41f8, "gre_add_protocol" },
	{ 0xfcbb14c4, "ip_tunnel_newlink" },
	{ 0x27e1a049, "printk" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x5eff8fe6, "ip_tunnel_uninit" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x956ac21a, "gre_del_protocol" },
	{ 0x5def83f9, "skb_push" },
	{ 0x2e0755a8, "iptunnel_xmit" },
	{ 0xf598158e, "ip_tunnel_init" },
	{ 0xf717f50f, "ip_tunnel_get_link_net" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x46dcd9db, "ip_tunnel_ioctl" },
	{ 0x5f41d05b, "ip_tunnel_changelink" },
	{ 0x8ed052a4, "rtnl_configure_link" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xafd24650, "ipv4_redirect" },
	{ 0xa2a83c03, "ip_mc_inc_group" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x5dca77a5, "ip_tunnel_init_net" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x14c090e5, "rtnl_create_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xf5953450, "ip6_err_gen_icmpv6_unreach" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xd7ed619d, "dst_cache_set_ip4" },
	{ 0xe22befbf, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe4e56519, "ip_tunnel_change_mtu" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd07e3772, "ip_mc_dec_group" },
	{ 0xd06027a3, "gre_parse_header" },
	{ 0x9c35da47, "ip_tunnel_rcv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "273C8D2ABFCF9DCCCB5F2C7");
MODULE_INFO(rhelversion, "8.0");
