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
	{ 0xf9a482f9, "msleep" },
	{ 0xf6295c57, "tpm_pm_resume" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x73b9f8d2, "tpm_do_selftest" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa29a929f, "tpmm_chip_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf41eb3c7, "tpm_chip_register" },
	{ 0xe6478472, "_dev_info" },
	{ 0x36a8bdec, "tpm_pm_suspend" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdf89529f, "tpm_chip_unregister" },
	{ 0x7d064e1a, "tpm_calc_ordinal_duration" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x89318f48, "gpiod_set_raw_value" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61CA70C768269ED81C7D7DB");
MODULE_INFO(rhelversion, "8.0");
