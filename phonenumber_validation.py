def validate_mobile(value):
    """ Raise a ValidationError if the value looks like a mobile telephone number.
    """
    rule = re.compile(r'/^[0-9]{10,14}$/')

    if not rule.search(value):
        msg = u"Invalid mobile number."
        raise ValidationError(msg)
