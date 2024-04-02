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
	{ 0x5299124c, "kill_anon_super" },
	{ 0x1b3ee480, "simple_dname" },
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0xff5d0490, "register_virtio_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0x18783b1e, "balloon_page_enqueue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b44cf56, "balloon_page_alloc" },
	{ 0x61d9d11c, "iput" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x42627cec, "adjust_managed_page_count" },
	{ 0x2f4c3be5, "balloon_page_dequeue" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1376f636, "kern_unmount" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0x3fa013e0, "balloon_aops" },
	{ 0xa0da5dd1, "alloc_anon_inode" },
	{ 0x2120eb98, "kern_mount_data" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x90ce9d2e, "virtio_check_driver_offered_feature" },
	{ 0x7e16fb9b, "vm_node_stat" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x7278d328, "all_vm_events" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x837771be, "__ClearPageMovable" },
	{ 0x26d24cb8, "vm_event_states" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x13c8bc22, "__SetPageMovable" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2786d752, "mount_pseudo_xattr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0x4d91d37c, "virtqueue_add_outbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x121da905, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000005v*");

MODULE_INFO(srcversion, "980D90F8B231108FCEB6812");
MODULE_INFO(rhelversion, "8.0");
