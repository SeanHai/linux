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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0x754d539c, "strlen" },
	{ 0x38836319, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x1281fc85, "dst_cache_get_ip4" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x27e1a049, "printk" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2e0755a8, "iptunnel_xmit" },
	{ 0xea0d8067, "gro_cells_receive" },
	{ 0xed946a48, "init_net" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x509d1287, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcae5ca5, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd7ed619d, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xea937c72, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "853A1465D719A045A94D75D");
MODULE_INFO(rhelversion, "8.0");
