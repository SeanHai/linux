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
	{ 0x9c071dd6, "inet_unhash" },
	{ 0x89510678, "inet6_hash" },
	{ 0xbcd4582e, "compat_ipv6_getsockopt" },
	{ 0x458aa481, "compat_ipv6_setsockopt" },
	{ 0xa99b429a, "ipv6_getsockopt" },
	{ 0x8e9986fa, "ipv6_setsockopt" },
	{ 0xf29242d, "l2tp_ioctl" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0x68a77c57, "sock_common_recvmsg" },
	{ 0xc6689dc2, "inet_sendmsg" },
	{ 0x8111e5ea, "compat_sock_common_getsockopt" },
	{ 0xcb57cec7, "compat_sock_common_setsockopt" },
	{ 0x3a99fda, "sock_common_getsockopt" },
	{ 0xae6a7857, "sock_common_setsockopt" },
	{ 0xea398fa8, "inet_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x394bd3c4, "inet6_ioctl" },
	{ 0x95685855, "datagram_poll" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x70c1d535, "inet_dgram_connect" },
	{ 0x898a007b, "inet6_bind" },
	{ 0x729e0ed1, "inet6_release" },
	{ 0xce4ad748, "inet6_del_protocol" },
	{ 0xad7f25ae, "inet6_unregister_protosw" },
	{ 0x7dfa5034, "inet6_register_protosw" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0xba41a8bd, "inet6_add_protocol" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x27e1a049, "printk" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xa592a1a, "sk_free" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0x12b05e78, "l2tp_recv_common" },
	{ 0x458f5c96, "l2tp_session_get" },
	{ 0x65b7dca1, "sk_common_release" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6fe60ac1, "ipv6_chk_addr" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x8368d4ba, "__ip6_datagram_connect" },
	{ 0xbb610429, "__udp_disconnect" },
	{ 0x18cab353, "inet6_destroy_sock" },
	{ 0x87066b0c, "l2tp_tunnel_delete" },
	{ 0x6fcde61c, "ip6_dst_hoplimit" },
	{ 0xc2d69cc1, "ip6_push_pending_frames" },
	{ 0x60772438, "ip6_flush_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5f5ef186, "fl6_sock_lookup" },
	{ 0x4facdc54, "fl6_merge_options" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x373ba864, "release_sock" },
	{ 0x82aafd36, "ip6_append_data" },
	{ 0x70f94e46, "ip_generic_getfrag" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x66931f1c, "ip6_dst_lookup_flow" },
	{ 0x678d2993, "security_sk_classify_flow" },
	{ 0xd6ea8fb9, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x22874603, "ip6_datagram_send_ctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96bbd549, "__sock_recv_wifi_status" },
	{ 0xd8973df2, "ip6_datagram_recv_ctl" },
	{ 0x49514957, "__sock_recv_timestamp" },
	{ 0x8061bce0, "ipv6_recv_error" },
	{ 0x3f0ffbe, "skb_free_datagram" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "9647495AEDD3867C36BED6D");
MODULE_INFO(rhelversion, "8.0");
