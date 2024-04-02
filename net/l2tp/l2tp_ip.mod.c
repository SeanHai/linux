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
	{ 0x373ba864, "release_sock" },
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0x30cd0318, "ip_getsockopt" },
	{ 0x9c071dd6, "inet_unhash" },
	{ 0xb9502147, "ip_setsockopt" },
	{ 0x62739462, "sk_setup_caps" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12b05e78, "l2tp_recv_common" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0xc6689dc2, "inet_sendmsg" },
	{ 0x19b575e, "inet_del_protocol" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x65b7dca1, "sk_common_release" },
	{ 0xcb57cec7, "compat_sock_common_setsockopt" },
	{ 0x70c1d535, "inet_dgram_connect" },
	{ 0x68a77c57, "sock_common_recvmsg" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0x8111e5ea, "compat_sock_common_getsockopt" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x5d48337b, "compat_ip_getsockopt" },
	{ 0x96bbd549, "__sock_recv_wifi_status" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x678d2993, "security_sk_classify_flow" },
	{ 0x27e1a049, "printk" },
	{ 0xed9231e, "inet_addr_type" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xa592a1a, "sk_free" },
	{ 0xea398fa8, "inet_shutdown" },
	{ 0x9ed3a18b, "inet_add_protocol" },
	{ 0x49514957, "__sock_recv_timestamp" },
	{ 0xfd31bf90, "inet_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0xca164fa6, "inet_hash" },
	{ 0x8455de70, "ip_cmsg_recv_offset" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x7cc63cf7, "__sk_dst_check" },
	{ 0xcf04b867, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95685855, "datagram_poll" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb73e60ae, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0xae6a7857, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x8ad721e2, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb610429, "__udp_disconnect" },
	{ 0x87066b0c, "l2tp_tunnel_delete" },
	{ 0x73be5699, "inet_bind" },
	{ 0x3a99fda, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x72c86a82, "__ip4_datagram_connect" },
	{ 0x8ccd0447, "sock_wmalloc" },
	{ 0x458f5c96, "l2tp_session_get" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc666080d, "ip_queue_xmit" },
	{ 0xffed1bbd, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3f0ffbe, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "B013816F379C8B3567EAD00");
MODULE_INFO(rhelversion, "8.0");
