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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xf717f50f, "ip_tunnel_get_link_net" },
	{ 0x7a129f94, "ip_tunnel_get_iflink" },
	{ 0x272c1d26, "ip_tunnel_get_stats64" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x3d0508b4, "xfrm4_tunnel_register" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0xace33b95, "xfrm4_tunnel_deregister" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x2e0755a8, "iptunnel_xmit" },
	{ 0x38836319, "iptun_encaps" },
	{ 0x509f625d, "consume_skb" },
	{ 0xa210c10b, "skb_set_owner_w" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0x27e1a049, "printk" },
	{ 0x96c2d5cf, "ipv6_chk_prefix" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8d0c8450, "ipv6_chk_custom_prefix" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c35da47, "ip_tunnel_rcv" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0xa6010d16, "__iptunnel_pull_header" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x14c02506, "ip_tunnel_xmit" },
	{ 0xb74efd8e, "iptunnel_handle_offloads" },
	{ 0xe914e41e, "strcpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xed946a48, "init_net" },
	{ 0xe22befbf, "ip_tunnel_encap_setup" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xafd24650, "ipv4_redirect" },
	{ 0xf5953450, "ip6_err_gen_icmpv6_unreach" },
	{ 0x87cf308b, "ipv4_update_pmtu" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x509d1287, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "2A3EDC1093A779D6AFF314B");
MODULE_INFO(rhelversion, "8.0");
