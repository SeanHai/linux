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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x4b61e4c6, "rdma_get_service_id" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x28cde093, "no_llseek" },
	{ 0x2cae2d86, "rdma_join_multicast" },
	{ 0xbf4551d6, "ib_copy_path_rec_to_user" },
	{ 0x39ecde4b, "rdma_read_gids" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4caca99e, "ib_copy_ah_attr_to_user" },
	{ 0x11f9df30, "rdma_init_qp_attr" },
	{ 0x91715312, "sprintf" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x61bf4d45, "rdma_connect" },
	{ 0xb34036a3, "rdma_set_reuseaddr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x712ca7a9, "rdma_set_ib_path" },
	{ 0x3f7d2765, "ib_sa_pack_path" },
	{ 0x6bddef80, "misc_register" },
	{ 0x8ce0a765, "__rdma_accept" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x16939bc9, "rdma_listen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f4aaf84, "ib_copy_qp_attr_to_user" },
	{ 0x9cd1dd80, "rdma_set_afonly" },
	{ 0xaba90a34, "rdma_notify" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x787b953, "idr_alloc" },
	{ 0xed946a48, "init_net" },
	{ 0x50d83074, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd460abe3, "__task_pid_nr_ns" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x9e1a8ee6, "rdma_bind_addr" },
	{ 0xecc3eb03, "rdma_resolve_route" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd6636ca6, "rdma_addr_size_in6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdc341bca, "rdma_reject" },
	{ 0x1c3c0ad3, "rdma_addr_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa5490139, "rdma_set_service_type" },
	{ 0xf85f358a, "idr_replace" },
	{ 0xeea8612a, "rdma_resolve_addr" },
	{ 0x4a6cce24, "rdma_addr_size_kss" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xd5b23a09, "ib_sa_unpack_path" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2ff9fda7, "rdma_leave_multicast" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_uverbs,ib_core";


MODULE_INFO(srcversion, "1B20F7BE0600C745678487B");
MODULE_INFO(rhelversion, "8.0");
