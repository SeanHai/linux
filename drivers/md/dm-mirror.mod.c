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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfad9d53a, "dm_rh_get_region_size" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa68e1f06, "dm_rh_get_state" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6ff175aa, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x393737cf, "dm_rh_inc_pending" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xfc62ef4e, "dm_rh_get_region_key" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb446ab97, "dm_region_hash_create" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0x9c7ed448, "dm_kcopyd_copy" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0x31d245ef, "dm_rh_bio_to_region" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x61af2439, "dm_set_target_max_io_len" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xefde5167, "dm_unregister_target" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x318f7969, "add_timer" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0x5484198, "bio_endio" },
	{ 0xb7a822f7, "dm_rh_dirty_log" },
	{ 0x4430764e, "dm_rh_region_to_sector" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xab3f0089, "dm_rh_mark_nosync" },
	{ 0x3c1afa6c, "dm_dirty_log_destroy" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x15c2536a, "dm_noflush_suspending" },
	{ 0x121da905, "queue_work_on" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0x519f67a7, "dm_rh_delay" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xa290db01, "dm_dirty_log_create" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x45ab972a, "dm_rh_dec" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-log";


MODULE_INFO(srcversion, "7010594D812D81999F6DCA3");
MODULE_INFO(rhelversion, "8.0");
