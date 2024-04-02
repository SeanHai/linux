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
	{ 0x7a572302, "hid_sensor_pm_ops" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6af0f127, "sensor_hub_register_callback" },
	{ 0x46860710, "__iio_device_register" },
	{ 0xeb2e50c1, "hid_sensor_setup_trigger" },
	{ 0x792f7807, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0xddea4889, "sensor_hub_input_get_attribute_info" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x80b39423, "hid_sensor_parse_common_attributes" },
	{ 0x90a041da, "devm_iio_device_alloc" },
	{ 0xbbc80ac0, "sensor_hub_input_attr_get_raw_value" },
	{ 0x4fddc450, "hid_sensor_power_state" },
	{ 0x85c7112b, "hid_sensor_read_samp_freq_value" },
	{ 0x5fddf4ab, "hid_sensor_read_raw_hyst_value" },
	{ 0xf0b6e44c, "iio_push_to_buffers" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6f66627c, "hid_sensor_write_raw_hyst_value" },
	{ 0x9691e731, "hid_sensor_write_samp_freq_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x82b98301, "iio_triggered_buffer_cleanup" },
	{ 0x8f19e262, "hid_sensor_remove_trigger" },
	{ 0x3923f09, "iio_device_unregister" },
	{ 0xe40f271e, "sensor_hub_remove_callback" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-trigger,hid-sensor-hub,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200031");

MODULE_INFO(srcversion, "6406831FC554DE12F95D3B0");
MODULE_INFO(rhelversion, "8.0");
