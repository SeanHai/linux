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
	{ 0x50aa707, "inet_csk_reqsk_queue_drop" },
	{ 0x59814a84, "dccp_statistics" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0x3f54aaa7, "dccp_init_sock" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x320fe32a, "dccp_set_state" },
	{ 0x30cd0318, "ip_getsockopt" },
	{ 0x9c071dd6, "inet_unhash" },
	{ 0x5807105, "inet_twsk_put" },
	{ 0xecac40ef, "dccp_hashinfo" },
	{ 0xb9502147, "ip_setsockopt" },
	{ 0xac27b307, "dccp_sendmsg" },
	{ 0x31d8e8c7, "ip_build_and_send_pkt" },
	{ 0x62739462, "sk_setup_caps" },
	{ 0x714e759a, "dccp_ctl_make_reset" },
	{ 0x51973bf0, "dccp_destroy_sock" },
	{ 0xbcb4aac3, "dccp_make_response" },
	{ 0xa317e6b9, "sock_release" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x2011e16b, "dccp_send_sync" },
	{ 0x50f7c6c4, "dccp_rcv_established" },
	{ 0xb7bf278a, "security_skb_classify_flow" },
	{ 0x2c30042c, "inet_csk_prepare_forced_close" },
	{ 0x96b4b3c3, "dccp_create_openreq_child" },
	{ 0x8f15e1d, "dccp_check_req" },
	{ 0xc6689dc2, "inet_sendmsg" },
	{ 0xfd55f7c3, "dccp_recvmsg" },
	{ 0x19b575e, "inet_del_protocol" },
	{ 0xd3baf7a1, "inet_sk_rebuild_header" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa19873dc, "dccp_ioctl" },
	{ 0xcb57cec7, "compat_sock_common_setsockopt" },
	{ 0x99d62e63, "dccp_setsockopt" },
	{ 0x68a77c57, "sock_common_recvmsg" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x95ffc875, "dccp_child_process" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0x8111e5ea, "compat_sock_common_getsockopt" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x5d48337b, "compat_ip_getsockopt" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xd8575480, "dccp_parse_options" },
	{ 0x941f0058, "compat_dccp_setsockopt" },
	{ 0xc752eb01, "dccp_getsockopt" },
	{ 0x3f9e1ec8, "inet_csk_update_pmtu" },
	{ 0x678d2993, "security_sk_classify_flow" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x13f8189b, "inet_csk_route_req" },
	{ 0x8cc7ebcb, "inet_csk_route_child_sock" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0xff5c5c21, "inet_hash_connect" },
	{ 0x37f56947, "dccp_reqsk_init" },
	{ 0xc9b45915, "dccp_close" },
	{ 0xa592a1a, "sk_free" },
	{ 0xea398fa8, "inet_shutdown" },
	{ 0x9ed3a18b, "inet_add_protocol" },
	{ 0xc3b6a26c, "dccp_orphan_count" },
	{ 0x9eae97c3, "dccp_sync_mss" },
	{ 0x46f04a, "inet_accept" },
	{ 0x904885b9, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0xc65e4e97, "secure_dccp_sequence_number" },
	{ 0xfd31bf90, "inet_ioctl" },
	{ 0x55c9f59e, "inet_csk_get_port" },
	{ 0xe7086dc, "dccp_death_row" },
	{ 0x98f2ff6e, "inet_ctl_sock_create" },
	{ 0x7b08b898, "dccp_poll" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0xca164fa6, "inet_hash" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x9e309e5a, "ip_route_output_key_hash" },
	{ 0x330ce70e, "dccp_disconnect" },
	{ 0x7cc63cf7, "__sk_dst_check" },
	{ 0xcf04b867, "inet_release" },
	{ 0x3bcd15b2, "dccp_done" },
	{ 0xbb3af789, "inet_twsk_purge" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xef3ea248, "inet_reqsk_alloc" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x548b03e6, "inet_stream_connect" },
	{ 0xb81f8f19, "inet_getname" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa2dcce7b, "inet_ehash_nolisten" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb73e60ae, "compat_ip_setsockopt" },
	{ 0xdccd3609, "inet_csk_reqsk_queue_hash_add" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa73e507e, "compat_dccp_getsockopt" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xae6a7857, "sock_common_setsockopt" },
	{ 0x30233919, "__xfrm_policy_check" },
	{ 0x8ad721e2, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1761617, "security_inet_conn_request" },
	{ 0x48c06255, "inet_dccp_listen" },
	{ 0xa3776abc, "__inet_inherit_port" },
	{ 0x73be5699, "inet_bind" },
	{ 0x3a99fda, "sock_common_getsockopt" },
	{ 0x86be7924, "dccp_packet_name" },
	{ 0x7e944b84, "inet_csk_accept" },
	{ 0x9000f3fd, "__inet_lookup_listener" },
	{ 0xd9b01422, "dccp_reqsk_send_ack" },
	{ 0x7b55141a, "dccp_rcv_state_process" },
	{ 0x66d9feca, "dccp_connect" },
	{ 0x23c96acb, "dccp_shutdown" },
	{ 0xc666080d, "ip_queue_xmit" },
	{ 0xffed1bbd, "inet_unregister_protosw" },
	{ 0x1b3bc1a3, "inet_csk_addr2sockaddr" },
	{ 0x1b7878c9, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp";


MODULE_INFO(srcversion, "80C4FBAB6AF2587E114879A");
MODULE_INFO(rhelversion, "8.0");
