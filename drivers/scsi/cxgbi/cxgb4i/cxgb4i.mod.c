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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x2626b6d6, "iscsi_eh_cmd_timed_out" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x789b83dc, "iscsi_target_alloc" },
	{ 0xe1eaf333, "iscsi_eh_recover_target" },
	{ 0xfd4ecf31, "iscsi_eh_device_reset" },
	{ 0xcce818da, "iscsi_eh_abort" },
	{ 0x4a0e5a8, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0x9fba5cf1, "cxgbi_ep_disconnect" },
	{ 0xc2699166, "cxgbi_ep_poll" },
	{ 0x83cca4d3, "cxgbi_ep_connect" },
	{ 0xc7c40e45, "iscsi_session_recovery_timedout" },
	{ 0xe3355b79, "cxgbi_parse_pdu_itt" },
	{ 0x85985977, "cxgbi_conn_init_pdu" },
	{ 0xeac5035b, "cxgbi_conn_xmit_pdu" },
	{ 0xd3d6e6eb, "cxgbi_conn_alloc_pdu" },
	{ 0x36251244, "cxgbi_cleanup_task" },
	{ 0x30838257, "iscsi_tcp_task_xmit" },
	{ 0xdb855494, "iscsi_tcp_task_init" },
	{ 0x8a8194cd, "cxgbi_get_conn_stats" },
	{ 0x7c3f917c, "iscsi_conn_send_pdu" },
	{ 0xbde2aab8, "cxgbi_set_host_param" },
	{ 0x5be4349e, "cxgbi_get_host_param" },
	{ 0x18de717d, "iscsi_session_get_param" },
	{ 0xd601412e, "iscsi_conn_get_param" },
	{ 0xa75cdc3e, "cxgbi_get_ep_param" },
	{ 0x5e56e106, "cxgbi_set_conn_param" },
	{ 0x28e6a191, "iscsi_tcp_conn_teardown" },
	{ 0x4186e54c, "iscsi_conn_stop" },
	{ 0x2ebf86ce, "iscsi_conn_start" },
	{ 0xb37e3ddd, "cxgbi_bind_conn" },
	{ 0x3df86b1, "cxgbi_create_conn" },
	{ 0x1a6046a9, "cxgbi_destroy_session" },
	{ 0xac26b09a, "cxgbi_create_session" },
	{ 0x36454c58, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0xa754d01c, "cxgb4_register_uld" },
	{ 0xbab57f3, "cxgbi_iscsi_init" },
	{ 0xcc366636, "cxgbi_conn_tx_open" },
	{ 0x82da2a9, "cxgbi_sock_established" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x5f23d623, "cxgbi_conn_pdu_ready" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x16c5f651, "cxgb4_clip_get" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x8df939f1, "__neigh_event_send" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x4b0b56de, "cxgb4_port_idx" },
	{ 0x66f06625, "cxgb4_tp_smt_idx" },
	{ 0x49705dee, "cxgb4_port_chan" },
	{ 0xd69a0294, "cxgb4_best_mtu" },
	{ 0xc7bcaaed, "cxgb4_l2t_get" },
	{ 0x77bb5642, "cxgb4_alloc_atid" },
	{ 0xaabf1c04, "cxgb4_pktgl_to_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6f2f11b7, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x7bfeec6f, "cxgbi_sock_closed" },
	{ 0xe8f008ca, "cxgb4_clip_release" },
	{ 0xe7da4a54, "cxgb4_free_atid" },
	{ 0xc1ea042a, "cxgb4_l2t_release" },
	{ 0x1da291b0, "cxgbi_sock_purge_wr_queue" },
	{ 0xe90f439e, "cxgbi_sock_free_cpl_skbs" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4660d2e, "cxgb4_remove_tid" },
	{ 0x37a0cba, "kfree" },
	{ 0x5efd6d1c, "cxgbi_sock_fail_act_open" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1e718ccd, "cxgbi_sock_skb_entail" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x89405229, "cxgbi_hbas_add" },
	{ 0xec7b11b9, "cxgbi_device_portmap_create" },
	{ 0x5f8650d9, "cxgbi_ddp_ppm_setup" },
	{ 0x72e972cc, "cxgb4_port_viid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdda655c3, "cxgbi_device_register" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x240ec29e, "cxgb4_l2t_send" },
	{ 0x2138ad06, "cxgb4_select_ntuple" },
	{ 0x8b3014d7, "cxgbi_sock_rcv_peer_close" },
	{ 0x2428cffc, "cxgbi_sock_rcv_abort_rpl" },
	{ 0xa2a1c6a2, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xed95c959, "cxgb4_ofld_send" },
	{ 0x2eaabf62, "cxgbi_sock_rcv_wr_ack" },
	{ 0x244642a2, "__kfree_skb" },
	{ 0x6550d5e7, "cxgbi_device_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libcxgbi,libiscsi_tcp,cxgb4";


MODULE_INFO(srcversion, "EF102083E73FDE7522F9658");
MODULE_INFO(rhelversion, "8.0");
